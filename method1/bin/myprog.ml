open Ctypes
open Foreign
let hello_world = foreign "caml_hello_world" 
  (void @-> returning void)

let sum = foreign "caml_sum"
  (int @-> int @-> returning int)

let _ = hello_world ()
let () =
  let a = 10 in
  let b = 25 in
  let result = sum a b in
  Printf.printf "%d + %d = %d\n" a b result