# C++ Module 00

42 school exercises introducing C++98, classes, member functions, streams, and static members.

| Exercise | Program | Description |
| --- | --- | --- |
| ex00 | `megaphone` | Prints arguments in uppercase. |
| ex01 | `phonebook` | Stores and searches contacts using `ADD`, `SEARCH`, and `EXIT`. |
| ex02 | `GlobalBanksters` | Simulates bank accounts and reproduces the supplied transaction log. |

## Build and run

Requires a C++ compiler and Make. Run `make` inside an exercise directory, then launch its executable:

```sh
cd ex00
make
./megaphone "Hello world!"
```

For the other exercises, use `./phonebook` in `ex01` or `./GlobalBanksters` in `ex02` after building.

All exercises compile with `-Wall -Wextra -Werror -std=c++98`.

## Clean

- `make clean`: removes object files.
- `make fclean`: also removes the executable.
- `make re`: rebuilds from scratch.

For ex02, output should match `19920104_091532.log`, except for timestamps and the permitted variation in destructor order.
