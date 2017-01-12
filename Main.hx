package;
import cpp.vm.Thread;
class Main {
  public static function main () {
    //Thread.create( onThreadCreated );
    trace('${1+1} hello world');
    while (true) {
      trace(' what would you like to do?');
      var input = Sys.stdin().readLine();
      trace(input);
      switch (input) {
        case 'prepare tacos':
          Thread.create(prepareTacos);
        case 'warm tortillas':
          Thread.create(warmTortillas);
        case 'cook tortillas':
          Thread.create(cookTortillas);
        default:
          trace("I don't know how to do that");
      }
    }


  }

  public static function onThreadCreated () {
    trace('thread created');

  }

  public static function warmTortillas() {
    trace('warming');
    Sys.sleep(10);
    trace('warming tortillas done');
  }

  public static function cookTortillas() {
    trace('cooking');
    Sys.sleep(10);
    trace('cooking done');
  }

  public static function prepareTacos() {
    trace('preparing tacos');
    Sys.sleep(30);
    trace('preparing tacos done');
  }
}
