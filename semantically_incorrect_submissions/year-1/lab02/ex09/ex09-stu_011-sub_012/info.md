- stu_id: stu_011	       
- submission: sub_012
- exercise: lab02/ex09
- year: year-1
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-1/lab02/ex09/ex09-stu_011-sub_011)
- number_of_variables: 3
- program_features: [printf-format] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex09_0: Wrong Answer,ex09_1: Wrong Answer,ex09_2: Wrong Answer,ex09_3: Wrong Answer]
- number_of_faults: 3
- faults: ['N / 360;', 'N % 360;', 'printf("%d:%d:%d\n", hrs, min, N);']
- faulty_lines: [8,9,13]
- fault_types: [Wrong Literal,Wrong Literal,Incorrect Output]
- repair_actions: [Replace,Replace,Replace] 
- suggested_repairs: ['N / 3600;', 'N % 3600;', 'printf("%02d:%02d:%02d\n", hrs, min, N);']
