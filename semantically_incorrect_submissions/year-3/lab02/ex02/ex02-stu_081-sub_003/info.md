- stu_id: stu_081	       
- submission: sub_003
- exercise: lab02/ex02
- year: year-3
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-3/lab02/ex02/ex02-stu_081-sub_004)
- number_of_variables: 2
- program_features: [] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex02_0: Wrong Answer,ex02_1: Wrong Answer,ex02_2: Wrong Answer,ex02_3: Wrong Answer]
- number_of_faults: 3
- faults: ['printf("N?\n");', 'printf("M?\n");', 'printf("%d\n %d\n", N, M);']
- faulty_lines: [8,10,14]
- fault_types: [Incorrect Output,Incorrect Output,Presentation Error]
- repair_actions: [Remove,Remove,Replace] 
- suggested_repairs: ['', '', 'printf("%d\n%d\n", N, M);']
