- stu_id: stu_085	       
- submission: sub_004
- exercise: lab02/ex02
- year: year-3
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-3/lab02/ex02/ex02-stu_085-sub_015)
- number_of_variables: 2
- program_features: [] 
- number_of_passed_tests: 0
- number_of_failed_tests: 4
- tests_output: [ex02_0: Wrong Answer,ex02_1: Wrong Answer,ex02_2: Wrong Answer,ex02_3: Wrong Answer]
- number_of_faults: 3
- faults: ['maior<menor', 'printf("%d/n %d", menor, maior);', 'printf("%d/n %d", maior, menor);']
- faulty_lines: [9,11,15]
- fault_types: [Wrong Comparison Operator,Incorrect Output,Incorrect Output]
- repair_actions: [Replace,Replace,Replace] 
- suggested_repairs: ['maior>=menor', 'printf("%d\n%d\n",menor,maior);', 'printf("%d\n%d\n",maior,menor);']
