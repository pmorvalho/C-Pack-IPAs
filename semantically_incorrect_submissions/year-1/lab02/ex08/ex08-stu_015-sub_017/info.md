- stu_id: stu_015	       
- submission: sub_017
- exercise: lab02/ex08
- year: year-1
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-1/lab02/ex08/ex08-stu_015-sub_016)
- number_of_variables: 4
- program_features: [for-loop,uninit-vars] 
- number_of_passed_tests: 0
- number_of_failed_tests: 5
- tests_output: [ex08_0: Wrong Answer,ex08_1: Wrong Answer,ex08_2: Wrong Answer,ex08_3: Wrong Answer,ex08_4: Wrong Answer]
- number_of_faults: 2
- faults: ['float media;', 'printf("%.2f\n", media);']
- faulty_lines: [7,14]
- fault_types: [Uninitialized Variable,Wrong Parameter]
- repair_actions: [Replace,Replace] 
- suggested_repairs: ['float media=0;', 'printf("%.2f\n", media/n);']
