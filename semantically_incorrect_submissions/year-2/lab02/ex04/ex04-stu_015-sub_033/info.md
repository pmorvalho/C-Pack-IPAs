- stu_id: stu_015	       
- submission: sub_033
- exercise: lab02/ex04
- year: year-2
- correct_submission: None
- number_of_variables: 3
- program_features: [global-vars] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex04_0: Wrong Answer,ex04_1: Presentation Error,ex04_2: Presentation Error,ex04_3: Presentation Error]
- number_of_faults: 3
- faults: ['z < y', 'printf("%d\t%d\t%d\n", y, z, x);', 'printf("%d\t%d\t%d\n", z, y, x);']
- faulty_lines: [18,19,25]
- fault_types: [Wrong Comparison Operator,Incorrect Output,Incorrect Output]
- repair_actions: [Replace,Replace,Replace] 
- suggested_repairs: ['z < x', 'printf("%d %d %d\n", y, z, x);', 'printf("%d %d %d\n", z, y, x);']
