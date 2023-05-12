from db_query import *
from send_phone import *
from send_email import *

def select_visit_location():
    provider_locations = [
        '293 Oak Avenue, Springfield, IL 62701'
        '867 Cherry Street, Portland, OR 97205',
        '521 Maple Lane, Miami, FL 33101'
    ]
    return provider_locations[0]


def construct_notification_content(row):

    email_content = f"Mentcare medical Appointment Reminder\n\n" \
                f"Insurance Code: {row['insurance_code']}\n\n" \
                f"Reason for Visit: {row['reason_for_visit']}\n\n" \
                f"Location: Your Clinic Location {select_visit_location()}\n\n" \
                f"Please remember your upcoming appointment on {row['visit_date']} at {row['visit_time']}."

    return email_content


def notify(visit_data):

    notification_content = construct_notification_content(visit_data)
    notification_setting = visit_data["notification_setting"]

    if notification_setting == "NA":
        return None
    elif notification_setting == "Phone":
        email = visit_data["email"]
        phone_receiver = db_read_phone_by_email(email)
        print(phone_receiver)
        if phone_receiver is not None:
            send_phone_notification(
                phone_receiver,
                notification_content
            )
        return "Phone"
    elif notification_setting == "Email":
        return "Email"
    else:
        return None