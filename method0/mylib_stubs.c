#include <caml/mlvalues.h>
#include <caml/memory.h>
#include <caml/alloc.h>

CAMLprim value caml_hello_world(value unit) {
  printf("Hello from C!\n");
  return Val_unit;
}

CAMLprim value caml_sum(value v_a, value v_b) {
    
    // Convert OCaml 'value' to C 'int' 
    int a = Int_val(v_a);
    int b = Int_val(v_b);

    int result = a + b;

   
    // Convert C 'int' back to OCaml 'value'   
    return Val_int(result);
}