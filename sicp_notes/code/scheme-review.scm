;; Call Expression

(define (add x y) (+ x y))

(add 1 2)

;; Pairs and Lists

(define lst (cons 1 (cons 2 (cons 3 nil))))

(car lst)

(cdr lst)

;; Quotation

(symbol? (quote a))

(symbol? 'a)

(pair? (quote (1 2 3)))

(pair? (quote (lambda (x y) (+ x y))))

(pair? '(lambda (x y) (+ x y)))

(define a (define p 1))

a

(symbol? a)

;; Tail Recursion

(define (fact n)
    (if (= n 0)
        1
        (* n (fact (- n 1)))
    )
)

(define (fact-optimized n total)
    (if (= n 0)
        total
        (fact-optimized (- n 1) (* total n))
    )
)

(fact 520)

(fact-optimized 520 1)

;; Expressions as Data

(number? '1)

(boolean? '#t)

(symbol? 'a)

(pair? '(+ 1 2))

(eval '1)

(eval '#t)

(eval 'a)

(eval '(+ 1 2))

;; Macros

(define-macro (twice expr) (list 'begin expr expr))

(twice (print 'woof))

(define-macro (verbose-twice expr)
  (define res (list 'begin expr expr))
  res
)

(verbose-twice (print 'woof))

(define (fake-twice exor) (begin expr expr))

(fake-twice (print 'woof))

;; Quasiquotation

(define a 1)

(define b 2)

`(+ a b)

`(+ ,a ,b)

(define-macro (twice expr)
  (define res `(begin ,expr ,expr))
  (draw res)
  res
)

(twice (print 'woof))

;; Streams

(define s (cons-stream 1 (cons-stream 2 (cons-stream 3 nil))))

(car s)

(cdr-stream s)

s

(cdr-stream (cdr-stream s))

s

(cdr-stream (cdr-stream (cdr-stream s)))

s

(define (nats start) (cons-stream start (nats (+ start 1))))
    
(define naturals (nats 0))

naturals

(car naturals)

(cdr-stream naturals)

naturals

(cdr-stream (cdr-stream naturals))

naturals

(cdr-stream (cdr-stream (cdr-stream naturals)))

naturals
