# 동의대학교 ASW 코딩 풀이

동의대학교 응용소프트웨어공학과(ASW) 코딩 사이트에 제출한 개인 풀이 모음입니다. 총 381문제의 제출 446건을 담았습니다. 언어별로 C 269건, C++ 174건, Java 3건입니다.

## 문제별 구조

[`problems/`](problems/) 아래에 원본 문제 번호로 폴더를 만들었습니다. 파일명은 `solution_<제출번호>.<확장자>` 형식입니다. 한 문제에 여러 번 제출한 경우 각 제출 파일을 그대로 보관했습니다.

| 문제 | 제출 파일 예시 |
| --- | --- |
| [1000](problems/1000/) | [solution_44225.c](problems/1000/solution_44225.c) |
| [1007](problems/1007/) | [solution_112522.c](problems/1007/solution_112522.c), [solution_129732.java](problems/1007/solution_129732.java) |
| [1332](problems/1332/) | [solution_114731.cpp](problems/1332/solution_114731.cpp) |

## 로컬에서 실행

저장소 루트에서 원하는 제출 파일 하나를 선택해 실행합니다. 아래 예시는 PowerShell 기준입니다. C·C++에는 GCC, Java에는 JDK가 필요합니다. 실행한 뒤에는 해당 문제의 입력 형식에 맞춰 값을 입력합니다.

~~~powershell
gcc problems/1000/solution_44225.c -o solution.exe
.\solution.exe
~~~

~~~powershell
g++ -std=c++17 problems/1332/solution_114731.cpp -o solution.exe
.\solution.exe
~~~

Java 파일의 공개 클래스 이름은 `Main`이므로 복사본의 이름을 `Main.java`로 맞춥니다.

~~~powershell
New-Item -ItemType Directory -Force build | Out-Null
Copy-Item problems/1007/solution_129732.java build/Main.java
javac -d build build/Main.java
java -cp build Main
~~~
