
module Dom = {
  type document;
  type node;
  type event;
  external document : node = "document" [@@bs.val];
  external target : event => node = "" [@@bs.get];
  external value : node => string = "" [@@bs.get];
  external querySelector : string => node = "document.querySelector" [@@bs.val];
  external addEventListener : node => string => (event => unit) => unit =
    "addEventListener" [@@bs.send];
};
