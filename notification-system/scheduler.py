
from db_query import *
from utils import *
from logger import *

import time
import traceback

logger = Logger("log/scheduler_log")

while True:

    try:
        reminder_needed_list = db_read_patient_visit_info()
        for entry in reminder_needed_list:
            resp = notify(entry)
            logger.info(entry)
            logger.info(resp)
            time.sleep(5)
    except:
        error = traceback.format_exc()
        logger.error(str(error))

    time.sleep(60 * 60 * 12)