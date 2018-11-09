# valgrind-client-request

Allows making "client requests" when running Node under Valgrind.

Probably works best with Node 8.12+.

## Usage

```js
const ValgrindClientRequest = require('valgrind-client-request');

// https://sourceware.org/git/?p=valgrind.git;a=blob;f=callgrind/callgrind.h;hb=VALGRIND_3_14_0
ValgrindClientRequest.callgrindStartInstrumentation();
ValgrindClientRequest.callgrindStopInstrumentation();
```
