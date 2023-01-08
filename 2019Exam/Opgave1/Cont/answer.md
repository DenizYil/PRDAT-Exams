1.1

```fs
run (Every(Write(Prim("<",CstI 7,FromTo(1,10)))))
```

1.2:
```fsharp
 Every(
    Write(
        And(
            FromTo(1,4),
            And(
                Write(CstS "\n"),
                FromTo(1,4)
            )
        )
    )
)

Every(
    Write(
        Prim("*",
            FromTo(1,10),
            And(
                Write(CstS "\n"),
                FromTo(1,10)
            )
        )
    )
)

```

1.5
```fsharp
> let s1 = "Hi there - if there are anyone";;
val s1: string = "Hi there - if there are anyone"

> run (
    Every(
        Write(
            Prim("<", CstI 10, Find("e",s1))
        )
    )
);;





5 7 16 18 22 29 val it: value = Int 0
```

