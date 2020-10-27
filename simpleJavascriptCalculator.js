// JS calculator which gets user input via browsers prompt

function init(){
  const expression = getInput();
  const extracted = extractOperatorAndOperands(expression)
  if(extracted){
      return performCalculation(extracted);
  }

  return "Invalid expression was provided";
}


function getInput(){
  let userInput = window.prompt("Enter any valid expression like 9 + 1 or 1.5 + 2");
  if(userInput){
    return userInput.replace(/\s+/g, ""); // trimming the whitespace, if any
  }
  return "";
}

function extractOperatorAndOperands(expression){
  // splits the expression into an array

  if(!expression) return;

  const availableOperators = ["+", "-", "*", "/"];
  let isOperatorPresent = false;
  const splittedExpression = [];
  for(let operator of availableOperators){
    if(expression.includes(operator)){
      splittedExpression.push(operator);
      splittedExpression.push(...expression.split(operator));
      isOperatorPresent = true;
      return splittedExpression;
    }
  }
  if(!isOperatorPresent) return;
}

function performCalculation([operator, operandOne, operandTwo]){
  if(!operandOne || !operandTwo){
    return "Not enough operands were provided.";
  }
  operandOne = parseFloat(operandOne);
  operandTwo = parseFloat(operandTwo);
  switch(operator){
    case "+":
      return operandOne + operandTwo;
      break;
    case "-":
      return operandOne - operandTwo;
      break;
    case "*":
      return operandOne * operandTwo;
      break;
    case "/":
      return operandOne / operandTwo;
      break;
    default: 
      throw new Error("Invalid operator received!!");
  }
}
window.alert(init());
