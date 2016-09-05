const EventEmitter = require('events');
class MyEmitter extends EventEmitter {}

const myEmitter = new MyEmitter();
myEmitter.on('event', function(a, b) {
  console.log(a, b, this);
    // Prints:
    //   a b MyEmitter {
    //     domain: null,
    //     _events: { event: [Function] },
    //     _eventsCount: 1,
    //     _maxListeners: undefined }
});
//
myEmitter.once('event', (a, b) => {
  setImmediate(() => {
    console.log('this happens asynchronously');
  });
});

myEmitter.emit('event', 'a', 'b');
myEmitter.emit('event', 'x', 'y');
console.log(this);
