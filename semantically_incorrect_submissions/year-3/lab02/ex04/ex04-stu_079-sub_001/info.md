- stu_id: stu_079	       
- submission: sub_001
- exercise: lab02/ex04
- year: year-3
- correct_submission: None
- number_of_variables: 3
- program_features: [] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex04_0: Wrong Answer,ex04_1: Wrong Answer,ex04_2: Wrong Answer,ex04_3: Wrong Answer]
- number_of_faults: 2 
- faults: ['printf("%d\t%d\t%d", num1_ex4, num2_ex4, num3_ex4);', 'printf("%d\t%d\t%d", num1_ex4, num3_ex4, num2_ex4);']
- faulty_lines: [9,15]
- fault_types: [Wrong Expression,Wrong Expression]
- repair_actions: [Replace] 
- suggested_repairs: ['printf("%d %d %d\n", num3_ex4, num2_ex4, num1_ex4);', 'printf("%d %d %d\n", num2_ex4, num3_ex4, num1_ex4);']
