
4.1
```fs
run (Every(Write(FromTo(1,10))));;
1 2 3 4 5 6 7 8 9 10 val it: value = Int 0
```



4.2
```fs
    run (
        Every(
            Write(
                Prim("*", FromTo(1,10), FromTo(1, 10))
            )
        )
    )
```

4.3
```fs
run (
    Every(
        Write(
            Prim("*", FromTo(1,10),
                Seq(
                    FromTo(1, 10),
                    If(
                        Prim("<", FromTo(1,10), CstI 10),
                        Seq(
                            Write(CstS("\n")),
                            FromTo(1, 10)
                        ),
                        Fail
                    )
                )
            )
        )
    )
)
```

4.4
```fs
    | Random (min, max, num) ->
      if min > max or 0 > num then
        econt ()
      else
        let random = new System.Random();
        let randomNext(min, max) = random.Next(min,max+1)

        let rec loop i =
          if i <= num then
            cont (Int (randomNext(min, max))) (fun () -> loop (i+1))
          else
            econt ()
        loop 1
```