- stu_id: stu_085	       
- submission: sub_004
- exercise: lab02/ex01
- year: year-3
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-3/lab02/ex01/ex01-stu_085-sub_005)
- number_of_variables: 3
- program_features: [scanf-format,no-elses] 
- number_of_passed_tests: 0
- number_of_failed_tests: 3
- tests_output: [ex01_0: Wrong Answer,ex01_1: Wrong Answer,ex01_2: Wrong Answer]
- number_of_faults: 2
- faults: ['scanf("%d, %d, %d",&num1, &num2, &num3);', '']
- faulty_lines: [10,23]
- fault_types: [Incorrect Input,Presentation Error]
- repair_actions: [Replace,Insert] 
- suggested_repairs: ['scanf("%d %d %d",&num1, &num2, &num3);', 'printf("\n");']
