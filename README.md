#запуск программы 
1)mkdir build
2)cd build
3)cmake ..
4)make 
5)./Game


Вы появляетесь на карте,у вас под контролем Замок и Верфь. корабли в них будут увеличиваться каждые 6 ходов. Ваша цель - победить врага. Где-то на карте спрятано сокровище, получив которое вы увеличите атаку своих корабл.

#Архитектура. 
При старте Игры создается конкретная фракция (пираты, люди), которая по специализации юнита (лодка, корабль, подводный) создает требуемый объект. 
В начале игры буде доступна небольшая (флот корабльей) с константным числом юнитов. (К примеру, 40 лодка, 30 корабль,  16 подводный).
Для каждой фракции создается фабрика. Она не знает сколько и каких объектов мы можем создать. От нее наследуются классы в которых описывается метод созданию определенного юнита данной фракции. 
Есть класс Fleet, в котором в public будут храниться векторы короблей. 
Есть класс Fleet_builder и oт него наследуется классы: Man_Fleet_builder, Pirate_Fleet_builder.


Компоновщик :=> Можно найти в файле composite_unit.hpp. Может использоваться для получения суммарной атаки флота. 
Fleet_tools.hpp :=> реализованы функции объедининия сил(ship, submarine, boat) и функция битвы между двумя флотами, где победитель тот, у кого сила больше.


#стратегия
В игре есть 2 сложности, которые выбираются в самом начале игры с помощью паттера.
начаинается игра, вы выбирайте 1) пираты 2) люди. Далее представляется карта и игровая панель. Реализовано перемещение по карте, взаимодействие с предметами. При взаимодействии с сокровищем вы его берете и характеристики вашего флота увеличиваются. При взаимодействии с замком или верфой  можете увеличить свой флот кораблей.

Перемещение по карте требует 1 ход. Каждые 6 ходов население в замках/ верфях увеличивается на константу. Увеличение происходит с помощью паттерна "Observer".

Observe :=> Используется для того, чтобы когда пройдет 6 ходов увеличить количество юнитов в замке и верфe. Код с реализацией лежит в файлах "Observe" и "Building".


Паттерны Cor, Прокси, Visitor и Command не использовались в проекте, так как я считаю, что их не нужно. Command в основном нужен для отката событий, чего в моей игре не предусмотренно. Visitor не нужен, так как его просто негде использовать. Cor не нужен, так как я не выполняю последовательную обработку запросов. Прокси не нужен так как доступ ко всем объектам прямой нет смысла для этого.
Адаптер - не думаю что в таком игре нужно адаптер, так как игра простая. 
