- stu_id: stu_089	       
- submission: sub_013
- exercise: lab02/ex04
- year: year-3
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-3/lab02/ex04/ex04-stu_089-sub_015)
- number_of_variables: 4
- program_features: [for-loop,while-loop] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex04_0: Presentation Error,ex04_1: Presentation Error,ex04_2: Presentation Error,ex04_3: Presentation Error]
- number_of_faults: 2
- faults: ['i <= 2', 'printf("\n");']
- faulty_lines: [27,30]
- fault_types: [Wrong Comparison Operator,Wrong Expression]
- repair_actions: [Replace,Replace] 
- suggested_repairs: ['i < 2', 'printf("%d\n", n[2]);']