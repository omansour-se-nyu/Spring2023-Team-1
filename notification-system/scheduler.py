
from db_query import *
from utils import *

import time
import traceback

while True:

    try:
        reminder_needed_list = db_read_patient_visit_info()
        for entry in reminder_needed_list:
            notify(entry)
            time.sleep(5)
    except:
        error = traceback.format_exc()
        print(error)
        pass

    time.sleep(60 * 60 * 12)