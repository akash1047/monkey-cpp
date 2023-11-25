# Style Of Code

## file names

### header files

- The extension of the header files will be `.hpp`.
>   *example* :
>
>   debug.hpp, token.hpp, lexer.hpp


- If the header file contains a single class implementation then the Header file name can be allowed to be `PascalCase`. (don't think so much just name every file in snake case)
>   *example* :
>
>   ```C++
>   #ifndef FOO_BAR_HPP
>   #define FOO_BAR_HPP
>
>   namespace foo {
>
>   class Bar {
>       public:
>           void print_msg();
>
>       private:
>       char *msg;
>   };
>
>   }
>
>   #endif // FOO_BAR_HPP
>   ```
>   here you are allowed to name the file as `bar.hpp` or `Bar.hpp`

## class

- class name should follow `PascalCaseNaming`
> *example* :
> ```C++
> class ABallFloatingOnSeaWater { . . . };
>  ```

- methodes should have `snake_case_naming`
  - a static method should have `s_` prefix
  - a private method should have `m_` prefix
  - in othercase no prefix
> *example* :
> ```C++
> class ABallFloatingOnSeaWater {
> public:
>   static Shape s_shape() { return Shape::ROUND }
>
>   bool is_floating() { return !m_has_sank(); }
> private:
> 
>   bool m_has_sank() { ... }
> }
> ```
>| visibility | identifier | prefix | conjunction |
>|:---|---|:---:|:---:|
>|static | s_shape     | s_| s_ + shape   |
>|public | is_floating |   | is_floating  |
>|private| m_has_sank  | m_| m_ + has_sank|