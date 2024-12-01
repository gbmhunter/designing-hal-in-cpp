template <typename T>
class App {
public:
    App(LedBase<T>& led) : led(led) {}

    void run() {
        led.set(1);
    }

private:
    LedBase<T>& led;
};