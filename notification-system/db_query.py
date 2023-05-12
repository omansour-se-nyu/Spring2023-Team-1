
import pandas as pd
from datetime import datetime, timedelta

path = 'sqlite:///D:/2023Spring/SDE/Spring2023-Team-1/mentcare.sqlite'

def db_read_phone_by_email(target_email):

    query = f"SELECT phone, email FROM patients WHERE email == '{target_email}'"
    df = pd.read_sql_query(query, path)
    for _, row in df.iterrows():
        if row["email"] == target_email:
            return row["phone"]
    return None

def db_read_patient_visit_info():

    reminder_needed_list = []

    query = "SELECT visit_date, visit_time, email, insurance_code, reason_for_visit, notification_setting FROM patient_visits"
    df = pd.read_sql_query(query, path)

    for _, row in df.iterrows():
        current_time = datetime.now()

        visit_date = row["visit_date"]
        visit_time = row["visit_time"]
        appointment_timestamp = f"{visit_date} {visit_time}"
        appointment_time = datetime.strptime(appointment_timestamp, "%Y-%m-%d %H:%M:%S.%f")

        time_diff = appointment_time - current_time

        if timedelta(days=0) < time_diff < timedelta(days=1):
            reminder_needed_list.append(row)

    return reminder_needed_list
