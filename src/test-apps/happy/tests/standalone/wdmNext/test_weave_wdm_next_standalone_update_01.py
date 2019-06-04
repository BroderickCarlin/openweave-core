#!/usr/bin/env python


#
#    Copyright (c) 2019 Google LLC.
#    All rights reserved.
#
#    Licensed under the Apache License, Version 2.0 (the "License");
#    you may not use this file except in compliance with the License.
#    You may obtain a copy of the License at
#
#        http://www.apache.org/licenses/LICENSE-2.0
#
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the License is distributed on an "AS IS" BASIS,
#    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#    See the License for the specific language governing permissions and
#    limitations under the License.
#

#
#    @file
#       Calls Weave WDM Update between nodes.
#       WDM Stanadlone Update 01: Client send update request to publisher, and receive status report
#

import unittest
import set_test_path
from weave_wdm_next_test_base import weave_wdm_next_test_base
import WeaveUtilities


class test_weave_wdm_next_update_01(weave_wdm_next_test_base):

    def test_weave_wdm_next_mutual_subscribe_01(self):
        wdm_next_args = {}

        wdm_next_args['wdm_option'] = "update"
        wdm_next_args['total_client_count'] = 0
        wdm_next_args['final_client_status'] = 0
        wdm_next_args['timer_client_period'] = 0
        wdm_next_args['test_client_iterations'] = 1

        wdm_next_args['total_server_count'] = 0

        wdm_next_args['client_log_check'] = []
        wdm_next_args['server_log_check'] = []

        wdm_next_args['test_tag'] = self.__class__.__name__[19:].upper()
        wdm_next_args['test_case_name'] = ['WDM Standalone Update 01: Client send update request to publisher, and receive status report',
                                           ]
        print 'test file: ' + self.__class__.__name__
        print "weave-wdm-next test WDM Stanadlone Update 01"
        super(test_weave_wdm_next_update_01, self).weave_wdm_next_test_base(wdm_next_args)


if __name__ == "__main__":
    WeaveUtilities.run_unittest()