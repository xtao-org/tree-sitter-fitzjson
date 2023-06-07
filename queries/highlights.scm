; todo: figure this out
(entry (disabled) key: (_) @comment value: (_) @comment) 
; (entry (disabled) value: (_) @comment) 

(entry
  key: (_) @string.special.key)

(string) @string

(number) @number

[
  (null)
  (true)
  (false)
] @constant.builtin

; (escape_sequence) @escape

(comment) @comment
;(multicomment) @comment
;(multicomment (string (multistring) @comment)) 

(decorator) @tag
(pipe) @tag
(disabled) @comment

;(entry (disabled)) @comment