# SHA-1 File Hash Calculator

### Описание
Программа представляет собой утилиту для вычисления контрольной суммы файла на основе алгоритма SHA-1. Разработана на языке программирования C с использованием библиотеки OpenSSL. Утилита может применяться для образовательных целей.

### Функционал
1. Считывание файла.
2. Проверка возможности чтения файла.
3. Вычисление контрольной суммы (SHA-1).
4. Вывод результата в шестнадцатеричном формате.

### Алгоритм работы
1. Подключение необходимых заголовочных файлов.
2. Создание структуры `SHA_CTX` для хранения состояния SHA-1.
3. Открытие файла для чтения в бинарном режиме.
4. Проверка корректности открытия файла.
5. Инициализация контекста SHA-1.
6. Обновление контекста SHA-1 данными из буфера.
7. Завершение вычисления SHA-1 хэш-суммы.
8. Вывод результата в консоль.

### Требования
- Язык программирования: C.
- Зависимости: библиотека OpenSSL.

### Пример использования
Программа считывает содержимое файла, указанного в пути, и возвращает его хэш-сумму в виде шестнадцатеричной строки.

---

