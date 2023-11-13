# Push Swap

This project is about sorting data on a stack, with a limited set of instructions, using the lowest possible 
number of moves. It is inspired by the **[Tower of Hanoi](https://en.wikipedia.org/wiki/Tower_of_Hanoi)** game.

**Stack A** (on the left) is unsorted:

![pushswap1](https://github.com/dubmix/42-push-swap/assets/104844198/59ee682a-eb9a-4b18-8f7e-be7123804fa8)

Using **Stack B** (on the right) to pre-sort the chunks:

![pushswap2](https://github.com/dubmix/42-push-swap/assets/104844198/595411ae-0c04-4b86-9144-9b895e9930e6)

**Sorted!**

![pushswap3](https://github.com/dubmix/42-push-swap/assets/104844198/551557fc-2640-4050-a846-55153429ef96)

Thanks to **[o-reo](https://github.com/o-reo)** for the handy visualizer.

## Allowed operations

> The following commands are available at your hand:
> - `sa` (swap a): Swaps the first 2 elements at the top of stack a
> - `sb` (swap b): Swaps the first 2 elements at the top of stack b
> - `ss` : sa and sb simultaneously
> - `pa` (push a): Takes the first element at the top of b and put it at the top of a
> - `pb` (push b): Takes the first element at the top of a and put it at the top of b
> - `ra` (rotate a): Shifts up all elements of stack a by 1
> - `rb` (rotate b): Shifts up all elements of stack b by 1
> - `rr` : ra and rb simultaneously
> - `rra` (reverse rotate a): Shift down all elements of stack a by 1
> - `rrb` (reverse rotate b): Shift down all elements of stack b by 1
> - `rrr` : rra and rrb simultaneously

## Usage

> - Warning: `Makefile` is configured for `Linux` use only.

> - Compile with `make`
> - Then run with `./push_swap` + `ARGS` | Example: `./push_swap "5 3 42 43 99 98"`
> - Use `./push_swap` + `ARGS` + `| wc -l` to get the count of operations

## Restrictions

This project is written in C and 42 norm compliant:

> - All variables have to be declared and aligned at the top of each function
> - One function cannot have more than 25 lines
> - It is considering cheating to use functions that are forbidden in the subject














