- stu_id: stu_024	       
- submission: sub_018
- exercise: lab02/ex10
- year: year-1
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-1/lab02/ex10/ex10-stu_024-sub_017)
- number_of_variables: 3
- program_features: [while-loop,timeout] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex10_0: Time Limit Exceeded,ex10_1: Time Limit Exceeded,ex10_2: Time Limit Exceeded,ex10_3: Time Limit Exceeded]
- number_of_faults: 2
- faults: ['N/10 >= 0', 'soma=+ (N%10 *10);']
- faulty_lines: [13,15]
- fault_types: [Wrong Expression,Wrong Expression]
- repair_actions: [Replace,Replace] 
- suggested_repairs: ['N > 0', 'soma=soma + (N%10);']