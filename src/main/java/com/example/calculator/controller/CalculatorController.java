package com.example.calculator.controller;

import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/api")
public class CalculatorController {
    @GetMapping("/sqrt/{x}")
    public double sqrt(@PathVariable double x) {
        return Math.sqrt(x);
    }

    @GetMapping("/factorial/{x}")
    public long factorial(@PathVariable int x) {
        long fact = 1;
        for (int i = 1; i <= x; i++) {
            fact *= i;
        }
        return fact;
    }

    @GetMapping("/ln/{x}")
    public double naturalLog(@PathVariable double x) {
        return Math.log(x);
    }

    @GetMapping("/power/{x}/{y}")
    public double power(@PathVariable double x, @PathVariable double y) {
        return Math.pow(x, y);
    }
}
