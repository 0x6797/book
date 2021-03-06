(alias
 (name runtest)
 (deps
  (:x README.md)
  (package mdx)
  (package ocaml-compiler-libs)
  prelude.ml)
 (locks ../../global-lock)
 (action
  (progn
   (run ocaml-mdx test --prelude=prelude.ml --direction=to-md %{x})
   (diff? %{x} %{x}.corrected))))
