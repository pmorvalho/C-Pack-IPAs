- stu_id: stu_050	       
- submission: sub_002
- exercise: lab02/ex10
- year: year-2
- correct_submission: None
- number_of_variables: 5
- program_features: [global-vars,while-loop] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex10_0: Wrong Answer,ex10_1: Wrong Answer,ex10_2: Wrong Answer,ex10_3: Wrong Answer]
- number_of_faults: 2
- faults: ['printf("Escreva um numero\n");', 'printf("%d\n%d", numero_dig, soma);']
- faulty_lines: [5,16]
- fault_types: [Incorrect Output,Presentation Error]
- repair_actions: [Remove,Replace] 
- suggested_repairs: ['', 'printf("%d\n%d\n", numero_dig, soma);']