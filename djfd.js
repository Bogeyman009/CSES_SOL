function SimplePassword(str) {
  let result = "";

  for (let i = 0; i < str.length; i++) {
    if (str[i] === str[i].toUpperCase()) {
      result += 1;
    }

    if (typeof parseInt(str[i]) === "number") {
      result += 1;
    }

    if (str.match(/password/i)) {
      return false;
    }

    if (str.length > 7 && str.length < 31) {
      result += 1;
    }

    if (str.match(/.|?|!|:|,|;/)) {
      result += 1;
    }
  }

  if (result.length === 5) {
    return true;
  } else {
    return false;
  }
}
