- stu_id: stu_071	       
- submission: sub_001
- exercise: lab02/ex04
- year: year-3
- correct_submission: None
- number_of_variables: 3
- program_features: [] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex04_0: Wrong Answer,ex04_1: Wrong Answer,ex04_2: Wrong Answer,ex04_3: Wrong Answer]
- number_of_faults: 3
- faults: ['printf("Insira 3 numeros por favor\n") ;', 'printf ( "%d\t%d\t%d\n" , b , c , a);', 'printf ( "%d\t%d\t%d\n" , c , b , a);']
- faulty_lines: [8,14,19]
- fault_types: [Incorrect Output,Presentation Error,Presentation Error]
- repair_actions: [Remove,Replace,Replace] 
- suggested_repairs: ['', 'printf ( "%d %d %d\n" , b , c , a);', 'printf ( "%d %d %d\n" , c , b , a);']