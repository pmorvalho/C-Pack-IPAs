- stu_id: stu_097	       
- submission: sub_002
- exercise: lab02/ex02
- year: year-3
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-3/lab02/ex02/ex02-stu_097-sub_003)
- number_of_variables: 2
- program_features: [] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex02_0: Presentation Error,ex02_1: Presentation Error,ex02_2: Presentation Error,ex02_3: Presentation Error]
- number_of_faults: 2
- faults: ['printf("%d \n %d\n", N, M);', 'printf("%d \n %d\n", M, N);']
- faulty_lines: [10,12]
- fault_types: [Presentation Error,Presentation Error]
- repair_actions: [Replace,Replace] 
- suggested_repairs: ['printf("%d\n%d\n", N, M);', 'printf("%d\n%d\n", M, N);']