- stu_id: stu_068	       
- submission: sub_007
- exercise: lab02/ex05
- year: year-3
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-3/lab02/ex05/ex05-stu_068-sub_008)
- number_of_variables: 2
- program_features: [while-loop] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex05_0: Wrong Answer,ex05_1: Wrong Answer,ex05_2: Wrong Answer,ex05_3: Wrong Answer]
- number_of_faults: 2
- faults: ['int contador;', 'printf("%d", contador);']
- faulty_lines: [6,11]
- fault_types: [Uninitialized Variable,Presentation Error]
- repair_actions: [Replace,Replace] 
- suggested_repairs: ['int contador = 1;', 'printf("%d\n", contador);']