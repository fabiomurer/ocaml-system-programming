external hello_world : unit -> unit = "caml_hello_world"
external sum : int -> int -> int = "caml_sum"

let _ = hello_world ()
let () =
  let a = 10 in
  let b = 25 in
  let result = sum a b in
  Printf.printf "%d + %d = %d\n" a b result