- stu_id: stu_020	       
- submission: sub_002
- exercise: lab02/ex01
- year: year-1
- correct_submission: [path](https://github.com/pmorvalho/C-Pack-IPAs/blob/main/correct_submissions/year-1/lab02/ex01/ex01-stu_020-sub_006)
- number_of_variables: 4
- program_features: [no-elses,non-zero-return,uninit-vars] 
- number_of_passed_tests: 0
- number_of_failed_tests: 3
- tests_output: [ex01_0: Command exited with non-zero status (3),ex01_1: Command exited with non-zero status (6),ex01_2: Command exited with non-zero status (3)]
- number_of_faults: 4
- faults: ['printf("Insira três números ");', '', 'printf("O maior lido foi %d\n",maior);', 'return maior;']
- faulty_lines: [9,11,34,35]
- fault_types: [Incorrect Output,Uninitialized Variable,Incorrect Output,Wrong Instruction]
- repair_actions: [Remove,Insert,Replace,Remove] 
- suggested_repairs: ['', 'maior=primeiro;', 'printf("%d\n",maior);', '']
