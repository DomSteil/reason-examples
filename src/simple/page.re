module Note = {
  include ReactRe.Component;
  type props = {message: string};
  let name = "Note";
  let result = 100 + 200;
  let result1 = 101 + 201;
  let numbers : list int = [1, 2, 3];
  let result2 = 102 + 202;
  let handleClick _ _ => {
    Js.log "clicked!";
    None
  };
  let render {props, updater} =>
    <div onClick=(updater handleClick)> (ReactRe.stringToElement props.message) </div>;
};

include ReactRe.CreateComponent Note;

let createElement ::message => wrapProps {message: message};
