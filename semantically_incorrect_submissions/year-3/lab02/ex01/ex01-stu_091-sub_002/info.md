- stu_id: stu_091	       
- submission: sub_002
- exercise: lab02/ex01
- year: year-3
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-3/lab02/ex01/ex01-stu_091-sub_006)
- number_of_variables: 3
- program_features: [no-elses] 
- number_of_passed_tests: 0
- number_of_failed_tests: 3
- tests_output: [ex01_0: Wrong Answer,ex01_1: Wrong Answer,ex01_2: Wrong Answer]
- number_of_faults: 7
- faults: ['primeiro < segundo', 'primeiro < terceiro', 'primeiro > segundo', 'segundo < terceiro', 'primeiro > terceiro', 'segundo > terceiro', '']
- faulty_lines: [11,11,15,15,19,19,23]
- fault_types: [Wrong Comparison Operator,Wrong Comparison Operator,Wrong Comparison Operator,Wrong Comparison Operator,Wrong Comparison Operator,Wrong Comparison Operator,Presentation Error]
- repair_actions: [Insert,Insert,Insert,Insert,Insert,Insert,Insert] 
- suggested_repairs: ['primeiro > segundo', 'primeiro > terceiro', 'primeiro < segundo', 'segundo > terceiro', 'primeiro < terceiro', 'segundo < terceiro', 'printf("\n");']