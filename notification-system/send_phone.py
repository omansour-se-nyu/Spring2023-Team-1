import vonage
from config import *

client = vonage.Client(key=vonage_key, secret=vonage_secret_key)
sms = vonage.Sms(client)

def send_phone_notification(phone_receiver, message):

    response = sms.send_message(
        {
            "from": "18334443755",
            "to": phone_receiver,
            "text": message
        }
    )
    return response