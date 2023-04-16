CREATE TABLE patient_visits (
    patient_id INT NOT NULL,
    visit_date DATE NOT NULL, -- show up on frontend for patient
    visit_time TIME NOT NULL, -- show up on frontend
    reason_for_visit VARCHAR(255), -- show up on frontend
    symptoms VARCHAR(255),
    diagnosis VARCHAR(255),
    treatment VARCHAR(255),
    email VARCHAR(255), -- for patient
    provider_name VARCHAR(255),
    provider_contact VARCHAR(255),
    medication_name VARCHAR(255),
    medication_dosage VARCHAR(255),
    medication_frequency VARCHAR(255),
    medication_duration VARCHAR(255),
    lab_test_name VARCHAR(255),
    lab_test_results VARCHAR(255),
    insurance_code VARCHAR(255), -- show up on frontend for patient
    billing_code VARCHAR(255), -- show up on frontend for patient
    total_cost DECIMAL(10,2), -- hardcode 100 USD for patient
    follow_up_instructions VARCHAR(255),
    PRIMARY KEY (email, visit_date, visit_time)
);