module Clock = {
  module ClockSpec = {
    include ReactRe.Component.Stateful;
    let name = "Clock";

    type props = ();
    type state = {
      data: Js.Date.try
    };

    let getInitialState _ => {
      data: Js.Date.make ()
    };

    let render {state} =>
      <div>
        <h1> (ReactRe.stringToElement "Hello, world") </h1>
        <h2> (ReactRe.stringToElement ("It is " ^ Js.Date.toLocalTimeString date.state)) </h2>
      </div>
  };
};

include ReactRe.CreateComponent ClockSpec;
let createElement ::children =>
  wrapProps () ::children;
};

let render () =>
  ReactDOMRe.renderToElementWithId <Clock /> "root";

Js.Global.setInterval render 1000;
