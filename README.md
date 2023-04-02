# List based on built-in arrays and one-way linked ring list implementation
Application that contains two implementations of the Linked list class, where the first implementation is a list based on built-in arrays, and the second is a one-way linked ring list. 

## Calculating the variant number
Номер залікової книжки - 1526, тому номер варіанту 1526 % 4 = 2. Опис варіанту: початкова реалізація списку - список на базі вбудованих масивів/списків, друга реалізація списку - однобічно зв’язаний кільцевий список.

## How to build a project and run tests
The project was implemented using Visual Studio tools, so the instructions will be described for this IDE. First step is to build the project, to do this select Build -> Build Solution. Then open the test file "test.cpp" in the path "Lab2test\Lab2TestProject". Right-click on any part of the selected file and select Run Tests.

## Commit with crashed CI tests
The hash of commit is `7d44065` and [link](https://github.com/MargoPonomarenko/sdmt-2/commit/7d440650e562d30279966bcd684f317f95664cf5) to it.

## Summing up
Під час виконання роботи я зіштовхнулася з певними проблемами збірки та налаштування CMake для написання тестів, схоже, шо проблема була в певній системній помилці. Вирішити проблему вдалося використовуючи внутрішні інструменти Visual Studio. На написання самих тестів було витрачено менше часу аніж на системні налаштування. Використання тестів допомогло мені краще розібратися з усіма процесами проекту та вказували в можливих неточностях реалізації методів під час рефакторингу. Також unit-тести є важливою складовою процесу автоматизованого тестування, який допомагає забезпечити стабільність роботи програмного забезпечення під час змін у коді або залежностях. Отже, unit-тести дійсно потрібні та є корисними в процесі розробки програмного забезпечення.
