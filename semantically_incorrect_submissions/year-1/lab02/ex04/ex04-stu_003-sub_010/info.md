- stu_id: stu_003	       
- submission: sub_010
- exercise: lab02/ex04
- year: year-1
- correct_submission: None
- number_of_variables: 3
- program_features: [] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex04_0: Wrong Answer,ex04_1: Wrong Answer,ex04_2: Wrong Answer,ex04_3: Wrong Answer]
- number_of_faults: 4
- faults: ['printf("%d\n",b);', 'printf("%d\n",c);', 'printf("%d\n",c);', 'printf("%d\n",b);']
- faulty_lines: [33,34,48,49]
- fault_types: [Presentation Error,Presentation Error,Presentation Error,Presentation Error]
- repair_actions: [Replace,Replace,Replace,Replace] 
- suggested_repairs: ['printf("%d ",b);', 'printf("%d ",c);', 'printf("%d ",c);', 'printf("%d ",b);']
