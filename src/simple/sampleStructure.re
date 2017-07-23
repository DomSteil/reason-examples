/* This is like the object declaration part of ReactJS' `React.createClass(theObjectSpec)` */
module MyComponent = {
  include ReactRe.Component.Stateful;
  let name = "MyComponent";
  type props = {
    foo: string,
    bar: option int,
  };
  /*...*/
};

/* This is the equivalent of `React.createClass` */
include ReactRe.CreateComponent MyComponent;

/* The actual call exposed to consumers, via JSX */
let createElement ::foo ::bar=? => wrapProps {foo, bar};
