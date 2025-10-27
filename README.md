# C-Pack-IPAs

This is the official git repo of _"C-Pack of IPAs: A C90 Program Benchmark of Introductory Programming Assignments"_ published in the 5th International Workshop on Automated Program Repair, APR 2024, co-located with ICSE 2024. 

C-Pack-IPAs is a benchmark of student programs developed during an introductory programming course in the C programming language. These programs were collected over three distinct practical classes at Instituto Superior Técnico for 25 different IPAs.

The set of submissions was split into three groups: semantically correct, semantically incorrect, and syntactically incorrect submissions.
The students' submissions that satisfied the set of input-output test cases for each IPA were considered semantically correct. The submissions that failed at least one input-output test but successfully compiled were considered semantically incorrect implementations. Lastly, the students' submissions that did not successfully compile were considered syntactically incorrect implementations.

C-Pack-IPAs only contains students' submissions that gave their permission to use their programs for academic purposes. Each student's identification was anonymized for privacy reasons, and all the comments were removed from their programs. A unique identifier was assigned to each student. These identifiers are consistent among different IPAs and different years of the programming course. For example, if the identifier 'stu\_3' appears in more than one programming exercise, it corresponds to the same student. If some students take the course more than once, they are always assigned to the same anonymized identifier.

## IPAs

The set of IPAs corresponds to three different lab classes of the introductory programming course to the C programming language at Instituto Superior Técnico. Each lab class focuses on a different topic of the C programming language. 
The textual description of each programming assignment can be found in [IPAs_description](https://github.com/pmorvalho/C-Pack-IPAs/tree/main/IPAs_description), and the input/output tests used to evaluate semantically the set of students' submissions in [tests](https://github.com/pmorvalho/C-Pack-IPAs/tree/main/tests). Moreover, there is also a reference implementation for each IPA in [reference_implementations](https://github.com/pmorvalho/C-Pack-IPAs/tree/main/reference_implementations) that can be used by program repair frameworks that only accept a single reference implementation to repair incorrect programs.

## Compilation

Each student's submission (e.g. p1.c) was compiled using the following gcc command:
```
gcc -Wall -Wextra -Werror -ansi -pedantic -lm p1.c
```


## References

[![DOI](https://img.shields.io/badge/DOI-10.1145/3643788.3648010-blue)](https://doi.org/10.1145/3643788.3648010)

```bibtex
@inproceedings{DBLP:conf/icse-apr/OrvalhoJM24,
  author       = {Pedro Orvalho and
                  Mikol{\'{a}}s Janota and
                  Vasco Manquinho},
  title        = {C-Pack of IPAs: {A} {C90} Program Benchmark of Introductory Programming
                  Assignments},
  booktitle    = {{IEEE/ACM} International Workshop on Automated Program Repair, APR@ICSE
                  2024, Lisbon, Portugal, April 20, 2024},
  pages        = {14--21},
  publisher    = {{IEEE}},
  year         = {2024},
  doi          = {10.1145/3643788.3648010},
  bibsource    = {dblp computer science bibliography, https://dblp.org}
}
```

## Acks

We would like to thank all the students who gave permission to use their programs for our research. Secondly, we would like to thank Instituto Superior Técnico.
