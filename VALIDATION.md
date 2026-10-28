# Проверка 29.10.2026

Владелец выбрал незакоммиченный вариант раскладки из WSL как актуальный.
SHA256 `config/eyelash_corne.keymap`: `047014cf21aa9ad7a94d9c01d8f60aa276b5d3c73bb2939ddb816fb78cef7587`.

Пять вариантов из `build.yaml` собраны успешно: nice_view left/right,
Studio left и settings_reset left/right. Прошивки всех пяти вариантов
побайтно совпадают с Corne из объединённого `zmk-for-charybdis`.
Сборка выполнена в Docker с Zephyr SDK 0.16.9, west 1.5.0, CMake 3.31.6;
исходники подключены только для чтения, прошивка устройств не выполнялась.

`config/west.yml` закрепляет проверенные SHA модулей, включая ZMK v0.3.0
и Zephyr. Явный импорт Zephyr сохраняет upstream-фильтр зависимостей.
Старые экранные эксперименты сохранены в тегах `archive/20261029/*` и
не включены в master: локальный `e16d160` содержит DTS в `.conf` и не является
рабочей конфигурацией.

Локальные журналы, UF2 и полная карта 66 зависимостей:
`C:/Users/druzh/WorkingFolder/audits/branch-consolidation-20261029/validation/`:
`standalone-corne-final-summary.json`, `standalone-corne-resolved-shas.json`,
`corne-owner-layout/`. Сборка подтверждает компиляцию, поведение на физической
клавиатуре отдельно не проверялось.
