package org.openapitools.client.model {

import org.openapitools.client.model.Link;

    [XmlRootNode(name="GithubRespositoryContainerlinks")]
    public class GithubRespositoryContainerlinks {
                [XmlElement(name="self")]
        public var self: Link = NaN;
                [XmlElement(name="_class")]
        public var class: String = null;

    public function toString(): String {
        var str: String = "GithubRespositoryContainerlinks: ";
        str += " (self: " + self + ")";
        str += " (class: " + class + ")";
        return str;
    }

}

}
