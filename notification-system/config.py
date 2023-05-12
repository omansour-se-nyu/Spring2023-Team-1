import os

# vonage phone notification key
vonage_key = os.environ.get('MENTCARE_PHONE_NOTIFICATION_VONAGE_KEY')
vonage_secret_key = os.environ.get('MENTCARE_PHONE_NOTIFICATION_SECRET_KEY')

# postmark email access token
postmark_token = os.environ.get('MENTCARE_EMAIL_NOTIFICATION_POSTMARK_KEY')