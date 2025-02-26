package com.example.calculator;

import com.example.calculator.controller.CalculatorController;
import org.junit.jupiter.api.Test;
import org.springframework.boot.test.context.SpringBootTest;
import static org.junit.jupiter.api.Assertions.*;

@SpringBootTest
public class CalculatorApplicationTests {

	CalculatorController controller = new CalculatorController();

	@Test
	public void testSqrt() {
		assertEquals(4.0, controller.sqrt(16));
	}

	@Test
	public void testFactorial() {
		assertEquals(120, controller.factorial(5));
	}

	@Test
	public void testNaturalLog() {
		assertEquals(Math.log(10), controller.naturalLog(10));
	}

	@Test
	public void testPower() {
		assertEquals(16.0, controller.power(2, 4));
	}

}
