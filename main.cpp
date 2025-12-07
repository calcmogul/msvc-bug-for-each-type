class A {};
class B {};
class C {};
class D {};

template <typename... Ts, typename F>
void for_each_type(F f) {
  (f.template operator()<Ts>(), ...);
}

int main() {
  for_each_type<A, B>([]<typename T> {
    for_each_type<C, D>([]<typename U> {
      [](T&& t, U&& u) {}(T{}, U{});
    });
  });
}
